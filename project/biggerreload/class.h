class String
{public:
	String(){p=NULL;}
	String(char *str);
	friend bool operator>(String &string1,String &string2);
	void display();
	char *p;
};
