//Ӧ�ó��򿪷���Ա
class Application : public Library {
protected:
	virtual bool Step2(){
		//... ������дʵ��
    }

    virtual void Step4() {
		//... ������дʵ��
    }
};



//ֱ�ӵ���run�ȶ��Ľṹ�������麯��ȥ���ö�Ӧ�����ຯ�� 
int main()
	{
	    Library* pLib=new Application();
	    lib->Run();

		delete pLib;
	}
}




