
class  Addition
{
public:
	 Addition();
	~ Addition();

private:
	int x, y;

	int addition(int x,int y)
	{
		this->x = x;
		this->y = y;
		return x + y;
	}
};

 Addition:: Addition()
{
}

 Addition::~ Addition()
{
}