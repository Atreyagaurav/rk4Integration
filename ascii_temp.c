main()
{
    char c;
    do{
        c=getch();
        printf("%c:%d\t",c,c);
    }while(c!=27);
}
