--TEST--
GearmanWorker::enableExceptionHandler(),gearman_worker_enable_exception_handler()
--SKIPIF--
<?php if (!extension_loaded("gearman")) print "skip";
require_once('skipifconnect.inc');
?>
--FILE--
<?php 

// Test 1: GearmanWorker::addServers, Exception callback disabled. Exceptions
// should be skipped until we call enableExceptionHandler. Port 4731 is not
// being used as the port for GearmanD, so it will fail
$worker = new GearmanWorker();
$worker->addServers('localhost:4731,localhost', false);

// Enabling the exception handler, which will attempt to connect to
// the server and in doing so throw an exception since we can't
// connect to a server that doesn't exist
try {
	$worker->enableExceptionHandler();
} catch (Exception $e) {
	print "Exception 1 caught: " . $e->getMessage() . PHP_EOL;
}

// Test 2: GearmanWorker::addServers,  Exception callback enabled (by default).
// Here, we don't give the second param, so the exception handler is enabled
// upon calling addServers instead of later in enableExceptionHandler
$worker2 = new GearmanWorker();

try {
	$worker2->addServers('localhost:4731,localhost');
} catch (Exception $e) {
	print "Exception 2 caught: " . $e->getMessage() . PHP_EOL;
}

// Test 3: GearmanWorker::addServers, Also, when we explicitly enable in addServers
$worker3 = new GearmanWorker();

try {
	$worker3->addServers('localhost:4731,localhost', true);
} catch (Exception $e) {
	print "Exception 3 caught: " . $e->getMessage() . PHP_EOL;
}

// Now, do the same as above but with addServer (singular)
// Test 4: GearmanWorker::addServer, Exception callback disabled
$worker4 = new GearmanWorker();
$worker4->addServer('localhost', 4731, false);

try {
	$worker4->enableExceptionHandler();
} catch (Exception $e) {
	print "Exception 4 caught: " . $e->getMessage() . PHP_EOL;
}

// Test 5: GearmanWorker::addServer, default
$worker5 = new GearmanWorker();

try {
	$worker5->addServer('localhost', 4731);
} catch (Exception $e) {
	print "Exception 5 caught: " . $e->getMessage() . PHP_EOL;
}

// Test 6: GearmanWorker::addServer, explicitly set enableExceptionHandler
$worker6 = new GearmanWorker();

try {
	$worker6->addServer('localhost', 4731, true);
} catch (Exception $e) {
	print "Exception 6 caught: " . $e->getMessage() . PHP_EOL;
}

// Test 7: GearmanWorker::addServer, default (positive case)
$worker7 = new GearmanWorker();
$worker7->addServer('localhost', 4730);

// Test 8: GearmanWorker::addServer, explicitly set enableExceptionHandler (positive case)
$worker8 = new GearmanWorker();
$worker8->addServer('localhost', 4730, true);

// Test 9: GearmanWorker::addServer, call enableExceptionHandler (positive case)
$worker9 = new GearmanWorker();
$worker9->addServer('localhost', 4730, false);
$worker9->enableExceptionHandler();

print "OK";
?>
--EXPECTF--
Exception 1 caught: Failed to set exception option
Exception 2 caught: Failed to set exception option
Exception 3 caught: Failed to set exception option
Exception 4 caught: Failed to set exception option
Exception 5 caught: Failed to set exception option
Exception 6 caught: Failed to set exception option
OK
