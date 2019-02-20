#include"Observer.h"

void SetCol(int col)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
}

Subscriber::Subscriber(string name) :name(name)
{

}
void Subscriber::GetNews(NewsInFb * news)
{
	SetCol(7);

	cout << name;
	SetCol(12);
	cout << " : " << news->GetNews() << "  ";
	cout << "LIKE" << endl;
}


SubscribersForAll::SubscribersForAll(string name) : Subscriber(name) {}
SubscriberForRivneNews::SubscriberForRivneNews(string name) : Subscriber(name) {}

void SubscriberForRivneNews::GetNews (NewsInFb * news) 
{
	auto receivedNews = news->GetNews();
	//transform(receivedNews.begin(), receivedNews.end(), receivedNews.begin(), ::tolower);
	string rivne = "рівн";
	if (search(receivedNews.begin(), receivedNews.end(), rivne.begin(), rivne.end()) != receivedNews.end())
	{
		SetCol(7);
		cout << name;
		SetCol(12);
		cout << " : " << receivedNews << "  ";
		cout << "LIKE" << endl;
	}
}



NewsInFb::NewsInFb()
{
	subscribers = {};
	news = "Where can be your advs\n";
}
void NewsInFb::Attach(Subscriber * s)
{
	subscribers.push_back(s);
}
void NewsInFb::Detach(Subscriber * s)
{
	auto f = find_if(subscribers.begin(), subscribers.end(), [s](Subscriber * x) { return s->name == x->name; });
	if (f != subscribers.end()) subscribers.remove(s);
}
void NewsInFb::Notify()
{
	for (auto subsc : subscribers)
	{
		subsc->GetNews(this);
	}
}
void NewsInFb::CreateNews(string news)
{
	this->news = news;
	Notify();
}

string NewsInFb::GetNews()
{
	return news;
}


void main()
{
	SetConsoleOutputCP(1251);
	Subscriber * vasja = new SubscriberForRivneNews("Vasja");
	Subscriber * olga = new SubscribersForAll("Olga");
	Subscriber * ivan = new SubscribersForAll("Ivan");
	Subscriber * sergij = new SubscriberForRivneNews("Sergij");
	Subscriber * petro = new SubscriberForRivneNews("Petro");

	NewsInFb * fb = new NewsInFb();
	fb->Attach(vasja);
	fb->Attach(olga);
	fb->Attach(ivan);
	fb->Attach(sergij);
	fb->Attach(petro);





	cout << endl;

	fb->CreateNews("Жовтий снІг тече через небо прямо в кишеню лицаря рівне");

	cout << endl;
	cout << endl;

	fb->CreateNews("В Рівному відкриють майданчик для скакання на конях на батуті!!!!");

	cout << endl;
	cout << endl;

	/*fb->Detach(vasja);
	fb->Detach(olga);
	fb->Detach(petro);*/

	fb->CreateNews("Коли діти дома мама в астралі");
}