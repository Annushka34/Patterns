//#include<iostream>
//#include<string>
//#include<Windows.h>
//
//using namespace std;
//void MySleep(int n)
//{
//	cout << "\n------------" << n << "-----------------\n";
//	int num = 20;
//	while (num)
//	{
//		cout << "."; Sleep(50); num--;
//	}
//}
//
//
//class AbstractBuilder
//{
//protected:
//	string document;
//public:
//	virtual string GetDocument()
//	{
//		return document;
//	}
//	void InitDocument()
//	{
//		document = "";
//	}
//	virtual void SetHeader() = 0;
//	virtual void SetBody() = 0;
//	virtual void SetFooter() = 0;
//};
//
//class BuilderTxt : public AbstractBuilder
//{
//public:
//	void SetHeader()
//	{
//		document += "HEADER\n\n";
//	}
//	void SetBody()
//	{
//		document += "\nВы были на видеовстрече, \nв которой также участвовали Юра и zaharhraschuk@gmail.com\n24 янв., 12:09\n";
//	}
//	void SetFooter()
//	{
//		document += "FOOTER\n\nБесплатное приложение для твоего телефона...\n";
//	}
//};
//
//
//class BuilderHtml : public AbstractBuilder
//{
//public:
//	void SetHeader()
//	{
//		document += "<head>This is very cool .txt file<\head>";
//	}
//	void SetBody()
//	{
//		document += "<body><p>\nВы были на видеовстрече, \nв которой также участвовали Юра и zaharhraschuk@gmail.com\n24 янв., 12:09\n<\p><\body>";
//	}
//	void SetFooter()
//	{
//		document += "<div>Бесплатное приложение для твоего телефона...\n<\div>";
//	}
//};
//
//
//class BuilderPicture : public AbstractBuilder
//{
//public:
//	void SetHeader()
//	{
//
//	}
//	void SetBody()
//	{
//		cout << "DDDDDDDDDDDDD         \n";
//		cout << "	D::::::::::::DDD       \n";
//		cout << "	D:::::::::::::: : DD   \n";
//		cout << "	DDD:::: : DDDDD:::: : D\n";
//		cout << "	D:::: : D    D:::: : D \n";
//		cout << "	D:::: : D     D:::: : D\n";
//		cout << "	D:::: : D     D:::: : D\n";
//		cout << "	D:::: : D     D:::: : D\n";
//		cout << "	D:::: : D     D:::: : D\n";
//		cout << "	D:::: : D     D:::: : D\n";
//		cout << "	D:::: : D     D:::: : D\n";
//		cout << "	D:::: : D    D:::: : D \n";
//		cout << "	DDD:::: : DDDDD:::: : D\n";
//		cout << "	D:::::::::::::: : DD   \n";
//		cout << "	D::::::::::::DDD      o\n";
//		cout << "	DDDDDDDDDDDDD          \n";
//	}
//	void SetFooter()
//	{
//
//	}
//};
//
//
//
//class Director
//{
//	AbstractBuilder * _builder;
//public:
//	void SetBuilder(AbstractBuilder * builder)
//	{
//		_builder = builder;
//	
//	}
//
//	string GetFullDocument()
//	{
//		_builder->InitDocument();
//		_builder->SetHeader();
//		_builder->SetBody();
//		_builder->SetFooter();
//		return _builder->GetDocument();
//	}
//
//	string GetSmollDocument()
//	{
//		_builder->InitDocument();
//		_builder->SetBody();
//		return _builder->GetDocument();
//	}
//
//	string GetBigBodyDocument()
//	{
//		_builder->InitDocument();
//		_builder->SetBody();
//		_builder->SetBody();
//		_builder->SetBody();
//		return _builder->GetDocument();
//	}
//};
//void main()
//{
//	SetConsoleOutputCP(1251);
//
//
//	AbstractBuilder * builder1 = new BuilderHtml();
//	AbstractBuilder * builder2 = new BuilderPicture();
//	AbstractBuilder * builder3 = new BuilderTxt();
//
//
//	Director * d = new Director();
//	d->SetBuilder(builder2);
//
//	//-----GET DOCUMENT FROM DIRECTOR (TYPE OF DEPENDS ON CONCRETE BUILDER)
//	MySleep(1);
//	cout << d->GetBigBodyDocument();
//	MySleep(2);
//	cout << d->GetFullDocument();
//	MySleep(3);
//	cout << d->GetSmollDocument();
//}