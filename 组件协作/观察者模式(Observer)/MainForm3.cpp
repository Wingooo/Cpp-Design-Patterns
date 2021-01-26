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

		FileSplitter splitter(filePath, number);

		//��������� 
		ConsoleNotifier cn;
		splitter.addIProgress(this); //����֪ͨ
		splitter.addIProgress(&cn)�� //����֪ͨ

		splitter.split();

		splitter.removeIProgress(this);

	}

	virtual void DoProgress(float value){
		progressBar->setValue(value);
	}
};

//�ٶ���һ�������� 
class ConsoleNotifier : public IProgress {
public:
	virtual void DoProgress(float value){
		cout << ".";
	}
};

