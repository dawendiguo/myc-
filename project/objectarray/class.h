class Box
{public:
	Box(int h=10,int w=12,int len=15):height(h),width(w),length(len){}
	int volume();
	private:
	int height;
	int width;
	int length;
};

