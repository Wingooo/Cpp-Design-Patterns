 //单继承，多实现
//一般不推荐多继承，这里多继承的是接口 
class MainForm : public Form, public IProgress
{
	TextBox* txtFilePath;
	TextBox* txtFileNumber;

	//进度条组件 
	ProgressBar* progressBar;

public:
	void Button1_Click(){

		string filePath = txtFilePath->getText();
		int number = atoi(txtFileNumber->getText().c_str());

		FileSplitter splitter(filePath, number);

		//多个订阅者 
		ConsoleNotifier cn;
		splitter.addIProgress(this); //订阅通知
		splitter.addIProgress(&cn)； //订阅通知

		splitter.split();

		splitter.removeIProgress(this);

	}

	virtual void DoProgress(float value){
		progressBar->setValue(value);
	}
};

//再定义一个订阅者 
class ConsoleNotifier : public IProgress {
public:
	virtual void DoProgress(float value){
		cout << ".";
	}
};

