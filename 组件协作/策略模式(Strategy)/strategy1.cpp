//计算各国税 
enum TaxBase {
	CN_Tax,
	US_Tax,
	DE_Tax,
	FR_Tax       //更改，违背了开放封闭原则，对扩展开放，对更改封闭 
};

class SalesOrder{
    TaxBase tax;
public:
    double CalculateTax(){
        //...
        
        if (tax == CN_Tax){
            //CN***********
        }
        else if (tax == US_Tax){
            //US***********
        }
        else if (tax == DE_Tax){
            //DE***********
        }
		else if (tax == FR_Tax){  //更改
			//...
		}

        //....
     }
    
};
