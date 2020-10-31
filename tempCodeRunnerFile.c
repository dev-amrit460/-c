for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("number is not prime");
            m=1;
            break;
        }
    }
    if(m==0)
    printf("number is prime");
}