class groceryCounter
{
	public:	
		int inPut();
		void getOutPut();
		int getValues();
		void incr1();
		void incr10();
		void incr100();
		void incr1000();
		void incr3();
		void incr4();
		void getCount ();
		//void overflow();
		int tdollars;
		groceryCounter();
		groceryCounter(int, int, int, int, int);
		//void set(int newMonth, int newDate);
	//	int getCount();
	private:
		//bool checkInput();
		int cents;
		int dollars;
		int dime;
		int num;
		char c;
		int total;
		int overflow;
		bool over = false;
};
