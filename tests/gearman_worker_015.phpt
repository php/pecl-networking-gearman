--TEST--
gearman_worker_ping()
--SKIPIF--
<?php if (!extension_loaded("gearman")) print "skip";
require_once('skipifconnect.inc');
?>
--FILE--
<?php 

$host = 'localhost';
$port = 4730;

$json_workload = '{"workload":"test"}';

$worker = new GearmanWorker();
$worker->addServer($host, $port);
echo "GearmanWorker::server() (OO): ".($worker->ping($json_workload) ? "Success" : "Failure").PHP_EOL;

$worker2 = gearman_worker_create();
gearman_worker_add_server($worker, $host, $port);
echo "gearman_worker_work() (Procedural): ".($worker->ping($json_workload) ? "Success" : "Failure").PHP_EOL;

print "OK";
?>
--EXPECT--
GearmanWorker::server() (OO): Success
gearman_worker_work() (Procedural): Success
OK
