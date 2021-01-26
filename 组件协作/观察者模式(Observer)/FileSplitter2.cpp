class IProgress{
public:
	virtual void DoProgress(float value)=0;
	virtual ~IProgress(){}
};

//���಻����Ͻ����� �����Զ������� 
class FileSplitter
{
	string m_filePath;
	int m_fileNumber;

	IProgress*  m_iprogress; // ����֪ͨ����
	
public:
	
	FileSplitter(const string& filePath, int fileNumber,IProgress* iprogress) :
		m_filePath(filePath), 
		m_fileNumber(fileNumber){
		m_iprogress(iprogress)
	}


	void split(){

		//1.��ȡ���ļ�

		//2.��������С�ļ���д��
		for (int i = 0; i < m_fileNumber; i++){
			//...

			float progressValue = m_fileNumber;
			progressValue = (i + 1) / progressValue;
			m_iprogress->DoProgress(progressValue);//����֪ͨ
		}

	}

};
