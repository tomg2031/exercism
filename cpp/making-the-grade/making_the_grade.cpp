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
    int failed_scores;
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
    for (int i = 0; i < size(double_thresholds); i++) {
        double_thresholds[i] = (highest_score-40);
    }
    std::array<int, 4> rounded_thresholds{};
    for (double threshold : double_thresholds) {
        rounded_thresholds[threshold] = (static_cast<int>(std::floor(threshold)));
    }
    return rounded_thresholds;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    return {};
}

// Create a string that contains the name of the first student to make a perfect score on the exam.
std::string perfect_score(std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    return "";
}
