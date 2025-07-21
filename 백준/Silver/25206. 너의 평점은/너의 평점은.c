#include <stdio.h>
#include <string.h>

double point(const char* grade)
{
	const char* grades[] = {"A+", "A0", "B+", "B0", "C+", "C0", "D+", "D0", "F"};
	const double scores[] = {4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0.0};

	
	for (int i = 0; i < 9; i++)
	{
		if (strcmp(grade, grades[i]) == 0)
		{
			return scores[i];
		}
	}

	return 0.0;
}

int main()
{
	double total = 0.0;
	char grade[3];
	char dummy[100];
	double score;
	double totalexam =0.0;
	for (int i = 0; i < 20; i++)
	{
		scanf("%s %lf %s",dummy, &score, grade);
		if (strcmp(grade, "P") == 0)
		{
			continue;
		}

		total += score * point(grade);
		totalexam += score;
	}


	

	printf("%.6lf\n", total/totalexam);
return 0;
}

