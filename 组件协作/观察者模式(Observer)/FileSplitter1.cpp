//实现文件分割 
class FileSplitter
{
	string m_filePath;
	int m_fileNumber;
	
	//一个进度条组件 
	//对于依赖倒置原则不符合 
	ProgressBar* m_progressBar;

public:
	FileSplitter(const string& filePath, int fileNumber, ProgressBar* progressBar) :
		m_filePath(filePath), 
		m_fileNumber(fileNumber),
		m_progressBar(progressBar){

	}

	void split(){

		//1.读取大文件

		//2.分批次向小文件中写入
		for (int i = 0; i < m_fileNumber; i++){
			//...
			
			//分割的进度条 
			float progressValue = m_fileNumber;
			progressValue = (i + 1) / progressValue;
			m_progressBar->setValue(progressValue);
		}

	}
};
