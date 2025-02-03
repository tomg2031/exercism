#include <array>
#include <string>
#include <vector>
#include <cmath>


// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> newscores{};
    for (double score : student_scores) {
       newscores.emplace_back(static_cast<int>(std::floor(score)));
    }
    return newscores;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int failed_scores{0};
    for (int student : student_scores) {
        if (student <= 40) {
            failed_scores++;
        }
    }
    return failed_scores;
}

// Determine how many of the provided student scores were 'the best' based on the provided threshold.
std::vector<int> above_threshold(std::vector<int> student_scores, int threshold) {
    // TODO: Implement above_threshold
    std::vector<int> grades_above_threshold{};
    for (int student : student_scores) {
        if (student >= threshold) {
            grades_above_threshold.emplace_back(student);
        }
    }
    return grades_above_threshold;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    std::array<double, 4> double_thresholds{};
    std::array<int, 4> rounded_thresholds{};
    const int total_range = highest_score - 40;
    const double grade_interval_size = total_range / 4;
    for (int i = 0; i < double_thresholds.size(); i++) {
        double_thresholds[i] = (grade_interval_size)*(i)+40;
        rounded_thresholds[i] = (static_cast<int>(std::floor(double_thresholds[i])+1));
        // the minimum value of the range is one more than calculated by the above variables
        // every value in rounded thresholds should have 1 added after rounding down.
    }
    
    return rounded_thresholds;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::vector<std::string> student_rankings{};
    for (int i = 0; i <student_scores.size(); i++) {
        std::string rank = std::to_string(i + 1);
        student_rankings.emplace_back (rank + ". " + student_names[i] + ": " + std::to_string(student_scores[i]));
    }
    return student_rankings;
}

// Create a string that contains the name of the first student to make a perfect score on the exam.
std::string perfect_score(std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    for (int i = 0; i < student_scores.size(); i++) {
        if (student_scores[i] == 100) {
            return student_names[i];
        } 
    }
    return "";
}
