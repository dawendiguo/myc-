template<class numtype>
class Compare
{
public:
    Compare(numtype a,numtype b)
    {
        x=a;y=b;
    }
    numtype max()
    {
        return (x>y)?x:y;
    }
    numtype min()
    {
        return (x<y)?x:y;
    }
private:
    numtype x,y;
};
