#include <iostream>
#include <array>
#include <string>
#include <vector>
#include <cmath>

std::array<int, 4> letter_grades(int);

int main() {
    int high_score = 88;
    std::array<int, 4> thresholds = letter_grades(high_score);
    
    return 0;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    std::array<double, 4> double_thresholds{};
    std::array<int, 4> rounded_thresholds{};
    const int total_range = highest_score - 40;
    const double grade_interval_size = total_range / 4;
    std::cout << "Grade Interval Size: " << grade_interval_size << std::endl;
    for (int i = 0; i < double_thresholds.size(); i++) {
        
        double_thresholds[i] = (grade_interval_size)*(i)+40;
        std::cout << double_thresholds[i] << std::endl;
        rounded_thresholds[i] = (static_cast<int>(std::ceil(double_thresholds[i])));
        std::cout << rounded_thresholds[i] << std::endl;
    }
    // for (const double threshold : double_thresholds) {
    //     std::cout << threshold << std::endl;
    //     }
    return rounded_thresholds;
}