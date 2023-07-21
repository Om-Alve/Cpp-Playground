#include <stdio.h> //Including libraries
#include <string.h>
#include <cs50.h>
#include <math.h>

int num_of_Letters(string text, int len);   // Finding the number of letters in string
int num_of_words(string text, int len);     // Finding the number of words in string
int num_of_sentences(string text, int len); // Finding the number of sentences in string
void grade(int l, int w, int s);            // Outputs the grade level as defined by the Coleman-Liau index
int main(void)
{
    string text = get_string("Text: "); // Getting input from user
    int len = strlen(text);
    int letters = num_of_Letters(text, len);
    int words = num_of_words(text, len);
    int sentences = num_of_sentences(text, len);
    grade(letters, words, sentences);
}
int num_of_Letters(string text, int len)
{
    int letters = 0;
    for (int i = 0; i < len; i++)
    {
        if (((text[i] >= 'a') && (text[i] <= 'z')) || ((text[i] >= 'A') && (text[i] <= 'Z')))
        {
            letters++;
        }
    }
    return letters;
}
int num_of_words(string text, int len)
{
    int words = 1;
    for (int i = 0; i < len; i++)
    {
        if (text[i] == ' ')
        {
            words++;
        }
    }
    return words;
}
int num_of_sentences(string text, int len)
{
    int sentences = 0;
    for (int i = 0; i < len; i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences++;
        }
    }
    return sentences;
}
void grade(int l, int w, int s)
{
    float L, S;
    L = l / (w / 100.0);
    S = s / (w / 100.0);
    int index = round(0.0588 * L - 0.296 * S - 15.8);
    if (index <= 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}