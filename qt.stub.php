<?php

/**
 * @generate-class-entries
 * @undocumentable
 */

namespace Qt\Widgets {
    class QApplication
    {
        public function __construct() {}
        public function exec(): int {}
    }
    class QWidget
    {
        public function __construct(?QWidget $parent = null, int $windowFlags = 0) {}
        public function show(): void {}
    }

    class QMainWindow extends QWidget
    {
        public function __construct(?QWidget $parent = null, int $windowFlags = 0) {}
    }
}
