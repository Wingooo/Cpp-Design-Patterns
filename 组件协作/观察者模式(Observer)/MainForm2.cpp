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

		//思考为什么传入this指针
		//this指针 指当前mainform对象的指针 ，这对象必然实现了Iprogress接口 
		FileSplitter splitter(filePath, number,this);

		splitter.split();

	}

	virtual void DoProgress(float value){
		progressBar->setValue(value);
	}
};


