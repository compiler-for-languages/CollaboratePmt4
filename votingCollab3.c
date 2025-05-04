

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
    printf("%s is the WINNER with %d votes\n",cnd[count].name,max);//

}

