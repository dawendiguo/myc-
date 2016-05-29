class Student
{
	public:
		Student(int n,int a,float s):num(n),age(a),score(s){}
		void total();
		static float average();
	private:
		int num;
		int age;
		float score;
		static float sum;
		static int count;
};
