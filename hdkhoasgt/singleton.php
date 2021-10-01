<?php

class Singleton
{
    private static $instances = [];

    protected function __construct()
    {
    }

    protected function __clone()
    {
        throw new \Exception("Cannot clone singleton");
    }

    public function __wakeup()
    {
        throw new \Exception("Cannot unserialize singleton");
    }

    public static function getInstance()
    {
        $subclass = static::class;
        if (!isset(self::$instances[$subclass])) {
            self::$instances[$subclass] = new static();
        }
        return self::$instances[$subclass];
    }
}

class Logger extends Singleton
{
    private $fileHandle;

    protected function __construct()
    {
        $this->fileHandle = fopen('php://stdout', 'w');
    }

    public function writeLog($message)
    {
        $time = date('Y-m-d H:i:s');
        fwrite($this->fileHandle, "$time $message\n");
    }

    public static function log($message)
    {
        $logger = static::getInstance();
        $logger->writeLog($message);
    }
}

function clientCode()
{
    $l1 = Logger::getInstance();
    $l2 = Logger::getInstance();
    if ($l1 === $l2) {
        Logger::log("Logger has a single instance.");
    } else {
        Logger::log("Loggers are different.");
    }
}

clientCode();
