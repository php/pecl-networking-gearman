--TEST--
unserialize(serialize(GearmanTask))
--SKIPIF--
<?php if (!extension_loaded("gearman")) print "skip"; ?>
--FILE--
<?php
$i = 0;
while ($i <= 5) {
    echo $i;
    $client = new GearmanTask();
    unserialize(serialize($client));
    $i++;
}
print PHP_EOL;

print "OK";
?>
--EXPECT--
012345
OK
