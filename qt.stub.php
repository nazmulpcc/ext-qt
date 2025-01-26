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
        public function setWindowTitle(string $title): void {}
        public function show(): void {}
        public function showFullScreen(): void {}
        public function showMaximized(): void {}
        public function showMinimized(): void {}
        public function showNormal(): void {}
    }

    class QMainWindow extends QWidget
    {
        public function __construct(?QWidget $parent = null, int $windowFlags = 0) {}
        public function setCentralWidget(QWidget $widget): void {}
    }

    class QLabel extends QWidget
    {
        public function __construct(?string $text = null, ?QWidget $parent = null, int $windowFlags = 0) {}
        public function setText(string $text): void {}
        public function text(): string {}
    }
}
