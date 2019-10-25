#include<iostream>
using namespace std;
struct compNum
{
	int rPart;
	int cPart;
};
compNum add(compNum c1, compNum c2)
{
	compNum c3;
	c3.rPart = (c1.rPart + c2.rPart);
	c3.cPart= (c1.cPart + c2.cPart);
	return(c3);

}
compNum sub(compNum c1, compNum c2)
{
	compNum c3;
	c3.rPart = (c1.rPart - c2.rPart);
	c3.cPart = (c1.cPart - c2.cPart);
	return (c3);
}
compNum mul(compNum c1, compNum c2)
{
	compNum c3;
	c3.rPart = (c1.rPart * c2.rPart)+(c1.cPart * c2.cPart);
	c3.cPart = (c1.rPart * c2.cPart)+(c1.cPart * c2.rPart);
	return c3;
}
int main()
{
	compNum c1, c2,result;
	c1.rPart = 10;
	c1.cPart = 3;
	c2.rPart = 9;
	c2.cPart = 6;
	cout << "Adding the complex numbers" << endl;
    result = add(c1, c2);
   cout << result.rPart << "+" << result.cPart << "i" << endl;
	cout << "Subtracting the complex numbers" << endl;
	result=sub(c1, c2);
	cout << "(" << result.rPart << ")" << " + " << "(" << result.cPart << ")" << "i" << endl;
	cout << "Multiplying the complex numbers" << endl;
	result=mul(c1, c2);
	cout << result.rPart << "+" << result.cPart << "i" << endl;
	system("pause");
	return 0;
}
