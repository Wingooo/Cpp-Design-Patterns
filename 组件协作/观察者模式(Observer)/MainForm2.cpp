//���̳У���ʵ��
//һ�㲻�Ƽ���̳У������̳е��ǽӿ� 
class MainForm : public Form, public IProgress
{
	TextBox* txtFilePath;
	TextBox* txtFileNumber;

	//��������� 
	ProgressBar* progressBar;

public:
	void Button1_Click(){

		string filePath = txtFilePath->getText();
		int number = atoi(txtFileNumber->getText().c_str());

		//˼��Ϊʲô����thisָ��
		//thisָ�� ָ��ǰmainform�����ָ�� ��������Ȼʵ����Iprogress�ӿ� 
		FileSplitter splitter(filePath, number,this);

		splitter.split();

	}

	virtual void DoProgress(float value){
		progressBar->setValue(value);
	}
};


