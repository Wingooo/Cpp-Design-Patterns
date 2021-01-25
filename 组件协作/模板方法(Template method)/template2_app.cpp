//应用程序开发人员
class Application : public Library {
protected:
	virtual bool Step2(){
		//... 子类重写实现
    }

    virtual void Step4() {
		//... 子类重写实现
    }
};



//直接调用run稳定的结构，根据虚函数去调用对应的子类函数 
int main()
	{
	    Library* pLib=new Application();
	    lib->Run();

		delete pLib;
	}
}




