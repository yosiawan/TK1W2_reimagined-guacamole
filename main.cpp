//
// Created by Yosia on 07/06/24.
//
#include <iostream>
#include <vector>

struct Student {
    std::string name{};
    int result{};
};

int main() {
    int numOfStudents;
    std::cout << "Masukkan jumlah mahasiswa: ";
    std::cin >> numOfStudents;

    std::vector<Student> students(numOfStudents);

    for (int studentNum = 0; studentNum < numOfStudents; ++studentNum) {
        printf("Masukkan Nama Mahasiswa ke %d:", studentNum + 1);
        std::cin >> students[studentNum].name;

        printf("Masukkan Nilai Mahasiswa ke %d:", studentNum  + 1);
        std::cin >> students[studentNum].result;
    }

    int numOfPassingStudents = 0;
    for (auto & student : students) {
        printf("Nama: %s.     Hasil Ujian: %s.\n", student.name.c_str(), student.result == 1 ? "LULUS":"GAGAL");
        if (student.result == 1) {
            ++numOfPassingStudents;
        }
    }

    const float passingRate = static_cast<float>(numOfPassingStudents) / static_cast<float>(numOfStudents);
    printf("Jumlah mahasiswa yang LULUS: %d.\n"
           "Jumlah mahasiswa yang GAGAL: %d.\n",
           numOfPassingStudents,
           numOfStudents - numOfPassingStudents);
    if (passingRate >= 0.8) {
        printf("Kelulusan kelas telah mencapai target!");
    }

    return 0;
}
