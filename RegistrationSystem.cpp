// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n, count;

//     cin >> n;

//     vector<string> names(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> names[i];
//     }

//     cout << "OK" << endl;

//     for (int i = 1; i < names.size(); i++)
//     {
//         count = 0;
//         for (int j = 0; j < i; j++)
//         {
//             if (names[j] == names[i])
//             {
//                 count++;
//             }
//         }
//         if (count == 0)
//         {
//             cout << "OK" << endl;
//         }
//         else
//         {
//             cout << names[i] << count << endl;
//         }
//     }
//     return 0;
// }

#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    int n;
    std::cin >> n;
    
    std::unordered_map<std::string, int> usernames;
    std::string name;
    
    for (int i = 0; i < n; ++i) {
        std::cin >> name;
        
        if (usernames.find(name) == usernames.end()) {
            // If name does not exist in the database
            usernames[name] = 0;
            std::cout << "OK" << std::endl;
        } else {
            // If name already exists
            int k = ++usernames[name]; // Increment the counter for this name
            while (usernames.find(name + std::to_string(k)) != usernames.end()) {
                k = ++usernames[name]; // Keep looking for the smallest unused number
            }
            std::string new_name = name + std::to_string(k);
            usernames[new_name] = 0; // Register the new name
            std::cout << new_name << std::endl;
        }
    }
    
    return 0;
}
