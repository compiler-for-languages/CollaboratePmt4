void getVotes(struct Candidate cnd[],int size)
{ char v,o;
int i;
printf("Enter the symbol/character of the party you wish to vote\n");
scanf("  %c",&v);

    for(i=0;i<size;i=i+1)
    {
  if(v==cnd[i].symbol)
  {
      cnd[i].votes=cnd[i].votes+1;
  }
    }
  printf("\nTHANK YOU, YOUR VALUABLE VOTE HAS BEEN RECORDED..you can go\n\n");
  printf("PRESS 'R' FOR RESULT 0R 'C' TO CAST VOTE\n");
  scanf("  %c",&o);
    if(o=='C')
    {
        displayAllCandidate(cnd,size);
    }
    else if(o=='R')
    {
        getResult(cnd,size);
    }
}

