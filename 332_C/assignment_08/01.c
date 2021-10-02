#include <stdio.h>
#include <string.h>

struct Cricket
{
  char player_name[50];
  char team_name[50];
  float batting_avg;
};

int main()
{
  struct Cricket players[10];
  int n;
  printf("Enter number of players: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    printf("Player %d\n------------------\n", i + 1);
    printf("Player Name: ");
    scanf(" %s", &players[i].player_name);
    printf("Team Name: ");
    scanf(" %s", &players[i].team_name);
    printf("Batting Avarage: ");
    scanf("%f", &players[i].batting_avg);
  }

  printf("Player Name\tTeam Name\tBatting Average\n");
  printf("----------------------------------------------------\n");
  for (int i = 0; i < n; i++)
  {
    printf("%s\t\t%s\t\t%.1f\t\n", players[i].player_name, players[i].team_name, players[i].batting_avg);
    printf("----------------------------------------------------\n");
  }

  return 0;
}
