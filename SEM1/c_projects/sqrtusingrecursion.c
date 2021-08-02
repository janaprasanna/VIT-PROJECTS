float sqrtt(unsigned int n,float sq,float temp)
{
    if(sq!=temp)
    {
       temp = sq;
        sq=((n/temp)+temp)/2;
        sqrtt(n,sq,temp);
    }
    else
    {
    	return sq;
	}

}
int main()
{
    int n = 5;
    float sq = n/2;
    printf("%f",sqrtt(n,sq,0));
}
 
