<?php

if (getenv("SKIP_ONLINE_TESTS")) die("skip online test");

require_once('connect.inc');

$sock = @fsockopen($host, $port);
if ($sock === false) {
    die("skip unable to connect");
}

$command = "getpid\n";
if (fwrite($sock, $command) !== strlen($command)) {
    die("skip unable to write getpid");
}

if (fread($sock, 8) === false) {
    die("skip unable to read pid");
}

fclose($sock);
