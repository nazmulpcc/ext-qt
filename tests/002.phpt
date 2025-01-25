--TEST--
test1() Basic test
--EXTENSIONS--
qt
--FILE--
<?php
$ret = test1();

var_dump($ret);
?>
--EXPECT--
The extension qt is loaded and working!
NULL
