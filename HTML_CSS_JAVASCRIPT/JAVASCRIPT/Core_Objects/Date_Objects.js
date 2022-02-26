/*
Date() create a new date object with current date and time;
you can specify what you want;
like:
new Date(milliseconds);
new Date(dateString);
new Date(year, month, day, hours, minutes, seconds, milliseconds);

setInterval(function, ms) calls a function on the time specified intervals, 1sec = 1000ms;
it will continue to call the function until clearInterval() is called or the window closed;

you can also use methods to get specified information;
like:
getFullYear() gets the year;
getMonth() gets the month;
getDate() gets the day of the month;
getDay() gets the day of the week;
getHours() gets the hour;
getMinutes() gets the minutes;
getSeconds() gets the seconds;
getMilliseconds() gets the milliseconds;
*/

var today = new Date("Febuary 26, 2022 01:52:00"); //this is a dateString;
var week = new Date().getDay();
console.log(new Date());
console.log(today);
console.log(week);