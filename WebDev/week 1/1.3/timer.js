function logCurrentTime()
{
   console.log((new Date()).getHours(),":",(new Date()).getMinutes(),":",(new Date()).getSeconds());
}

setInterval(logCurrentTime, 1000);