#include "iostream"
int main()
{
    std::string small_alpha{};
    char temp;
    std::cout << "Enter the string : ";
    int result{};
    std::cin >> small_alpha;

    for (int a = 0; small_alpha[a] != '\0'; a++)
    {
        if(temp != small_alpha[a] || temp == small_alpha[a] ){
            
        }
        int count = 1;
        temp = small_alpha[a];
        for (; temp != small_alpha[a];)
        {
            small_alpha[a]++;
            if (temp == small_alpha[a])
                count++;
            else
                result += small_alpha[a] - 96;
        }result += count*small_alpha[a]-96;
    }
    std::cout << " result is : " << result << std::endl;
}