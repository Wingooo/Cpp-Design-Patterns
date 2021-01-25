//应用程序开发人员
class Application{
public:
	bool Step2(){
		//...
    }

    void Step4(){
		//...
    }
};

//开发流程的主程序由应用程序开发人员开发
//开发人员去调用库，早绑定 
int main()
{
	Library lib();
	Application app();

	lib.Step1();

	if (app.Step2()){
		lib.Step3();
	}

	for (int i = 0; i < 4; i++){
		app.Step4();
	}

	lib.Step5();

}
