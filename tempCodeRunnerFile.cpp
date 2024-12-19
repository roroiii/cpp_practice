    double x = (int)3.14;           // implicit conversion
    std::cout << (char)100 << '\n'; // d
    std::cout << x << '\n';         // 3

    int correct = 8;
    int questions = 10;
    double score1 = correct / questions * 100;         // 0
    double score2 = (double)correct / questions * 100; // 80

    std::cout << "Score1: " << score1 << '\n';
    std::cout << "Score2: " << score2 << '\n';