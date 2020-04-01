#include <iostream>
#include <cstdlib>


static int res[2];

int* CompareTriplets(int* a, int* b)
{

    int score_a = 0;
    int score_b = 0;

    if (*(a+0) > *(b+0))
    {
        score_a += 1;
    }
    else if (*(a+0) < *(b+0))
    {
        score_b += 1;
    }
    else
    {
        score_a += 0;
        score_b += 0;
    }

    // std::cout << "Alice :" << score_a << " Bob: " << score_b << std::endl;

    if (*(a+1) > *(b+1))
    {
        score_a += 1;
    }
    else if (*(a+1) < *(b+1))
    {
        score_b += 1;
    }
    else
    {
        score_a += 0;
        score_b += 0;
    }


    // std::cout << "Alice :" << score_a << " Bob: " << score_b << std::endl;

    if (*(a+2) > *(b+2))
    {
        score_a += 1;
    }
    else if (*(a+2) < *(b+2))
    {
        score_b += 1;
    }
    else
    {
        score_a += 0;
        score_b += 0;
    }

    // std::cout << "Alice :" << score_a << " Bob: " << score_b << std::endl;

    res[0] = score_a;
    res[1] = score_b;

    return res;
}


int main()
{
    const int score_board_size = 3;
    int score_alice[3];
    int score_bob[3];
    // int checker;


    for (int i = 0; i < score_board_size; i++)
    {
        // For Alice
        std::cin >> score_alice[i];
        if (score_alice[i] > 101 || score_alice[i] < 1)
        {
            exit(-1);
        }
    }

    for (int i = 0; i < score_board_size; i++)
    {
        // For Bob
        std::cin >> score_bob[i];
        if (score_bob[i] > 101 || score_bob[i] < 1)
        {
            exit(-1);
        }
    }


    int* result = CompareTriplets(score_alice, score_bob);

    std::cout << result[0] << " " << result[1] << std::endl;

}