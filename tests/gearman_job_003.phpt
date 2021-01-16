--TEST--
unserialize(serialize(GearmanJob))
--SKIPIF--
<?php if (!extension_loaded("gearman")) print "skip"; ?>
--FILE--
<?php

$i = 0;
while ($i <= 5) {
    echo $i;
    $job = new GearmanJob();
    unserialize(serialize($job));
    $i++;
}
print PHP_EOL;

print "OK";
?>
--EXPECT--
012345
OK
