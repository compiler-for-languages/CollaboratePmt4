// SKG's online voting structure
#include <stdio.h>
struct Candidate
{
    char name[50];
    char symbol;
    int votes;
} cnd[100];
void fillCandidate(struct Candidate[]);
void displayAllCandidate(struct Candidate[], int);
void getVotes(struct Candidate[], int);
void getResult(struct Candidate[], int);
