main()
{
    fillCandidate(cnd);

}
void fillCandidate(struct Candidate cnd[])
{
    int i,size;
    printf("Enter the no. of candidates\n");
    scanf("%d",&size);
    for(i=0;i<size;i=i+1)
    {
        printf("Enter the name of the candidate\n");
        scanf("%s",cnd[i].name);
        printf("Enter a character or symbol for %s\n",cnd[i].name);
        scanf("  %c",&cnd[i].symbol);
    }
 displayAllCandidate(cnd,size);
}
void displayAllCandidate(struct Candidate cnd[],int size)
{
    int i;
    printf("-----------------------------------\n\n");
    printf("\tCANDIDATES LIST\n\n\tNAME\t\t\tSYMBOL");
    for(i=0;i<size;i=i+1)

    {
        printf("\n\n%s\t\t\t%c\n",cnd[i].name,cnd[i].symbol);
    }
    getVotes(cnd,size);
}