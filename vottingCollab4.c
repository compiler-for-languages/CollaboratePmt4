
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
  scanf("  %c",&o);//
    if(o=='C')
    {
        displayAllCandidate(cnd,size);
    }
    else if(o=='R')
    {
        getResult(cnd,size);
    }
}

=======
void getResult(struct Candidate cnd[],int size)
{int i;
    printf("\n\nPOLL RESULTS \n\nNAME\t\t\tVOTES\n\n");
    for(i=0;i<size;i=i+1)
    {printf("%s\t\t%d\n\n",cnd[i].name,cnd[i].votes);

    }

    int max,count=0;
    max=cnd[0].votes;
    for(i=0;i<size;i=i+1)
    {if(cnd[i].votes>max)
    {max=cnd[i].votes;
      count=i;  }
    }
    printf("%s is the WINNER with %d votes\n",cnd[count].name,max);

}
>>>>>>> f030201adc4007064db5eb59ca6a46e73967e7d3
