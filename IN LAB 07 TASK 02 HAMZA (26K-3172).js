// Task 2 - Student Information Program
const studentName = "Muhammad Hamza Alauddin"; 
const department = "Software Engineering";        

let semester = 1;                            
let isEnrolled = true;                       

var marksProgramming = 85;                      
var marksWeb = 78;
var marksDatabase = 90;

semester = 2;

const totalMarks = marksProgramming + marksWeb + marksDatabase;
const averageMarks = totalMarks / 3;
console.log("===== Student Information =====");
console.log("Name:", studentName);
console.log("Department:", department);
console.log("Semester:", semester);
console.log("Enrolled:", isEnrolled);
console.log("Marks in Programming Fundamentals:", marksProgramming);
console.log("Marks in Web Development:", marksWeb);
console.log("Marks in Database Systems:", marksDatabase);
console.log("Total Marks:", totalMarks);
console.log("Average Marks:", averageMarks.toFixed(2));
console.log("===== Data Types =====");
console.log("typeof studentName:", typeof studentName);          
console.log("typeof semester:", typeof semester);                 
console.log("typeof isEnrolled:", typeof isEnrolled);             
console.log("typeof marksProgramming:", typeof marksProgramming); 