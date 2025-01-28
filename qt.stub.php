<?php

/**
 * @generate-class-entries
 * @undocumentable
 */

namespace Qt\Core {
    class QObject
    {
        public function __construct(?QObject $parent = null) {}
        public function blockSignals(bool $block): void {}
        public function dumpObjectInfo(): void {}
        public function dumpObjectTree(): void {}
        public function isQuickItemType(): bool {}
        public function isWidgetType(): bool {}
        public function isWindowType(): bool {}
        public function killTimer(int $id): void {}
        public function objectName(): string {}
        public function setObjectName(string $name): void {}
        public function setParent(QObject $parent): void {}
        public function signalsBlocked(): bool {}
        public function startTimer(callable $callback, int $interval, int $timerType = 1): int {}
    }
}

namespace Qt\Widgets {
    class QApplication
    {
        public function __construct() {}
        static public function exec(): int {}
    }

    abstract class QAbstractButton extends QWidget
    {
        public function autoRepeat(): bool {}
        public function autoRepeatDelay(): int {}
        public function autoRepeatInterval(): int {}
        public function isChecked(): bool {}
        public function setAutoRepeat(bool $enable): void {}
        public function setAutoRepeatDelay(int $duration): void {}
        public function setAutoRepeatInterval(int $interval): void {}
        public function setChecked(bool $checked): void {}
        public function setText(string $text): void {}
        public function text(): string {}

        // Slots
        public function animateClick(): void {}
        public function click(): void {}
        public function toggle(): void {}

        // Signals
        public function onClicked(callable $callback): void {}
        public function onPressed(callable $callback): void {}
        public function onReleased(callable $callback): void {}
        public function onToggled(callable $callback): void {}
    }

    class QBoxLayout extends QLayout
    {
        public const int LeftToRight = 0;
        public const int RightToLeft = 1;
        public const int TopToBottom = 2;
        public const int BottomToTop = 3;

        public function __construct(int $direction, ?QWidget $parent = null) {}
        public function addStretch(int $stretch = 0): void {}
        public function addSpacing(int $size): void {}
        public function setDirection(int $direction): void {}
    }

    class QCheckBox extends QAbstractButton
    {
        public function __construct(?string $text = null, ?QWidget $parent = null) {}
        public function checkState(): int {}
        public function isTristate(): bool {}
        public function setCheckState(int $state): void {}
        public function setTristate(bool $tristate): void {}

        // Signals
        public function onCheckStateChanged(callable $callback): void {}
    }

    class QHBoxLayout extends QBoxLayout
    {
        public function __construct(?QWidget $parent = null) {}
    }

    class QVBoxLayout extends QBoxLayout
    {
        public function __construct(?QWidget $parent = null) {}
    }

    class QWidget extends \Qt\Core\QObject
    {
        public function __construct(?QWidget $parent = null, int $windowFlags = 0) {}
        public function setLayout(QLayout $layout): void {}
        public function setWindowTitle(string $title): void {}
        public function show(): void {}
        public function showFullScreen(): void {}
        public function showMaximized(): void {}
        public function showMinimized(): void {}
        public function showNormal(): void {}
        public function __destruct() {}
    }

    class QLabel extends QWidget
    {
        public function __construct(?string $text = null, ?QWidget $parent = null, int $windowFlags = 0) {}
        public function setText(string $text): void {}
        public function text(): string {}
    }

    abstract class QLayout extends \Qt\Core\QObject
    {
        public function addWidget(QWidget $widget): void {}
        public function removeWidget(QWidget $widget): void {}
        public function setSpacing(int $spacing): void {}
        public function spacing(): int {}
        public function __destruct() {}
    }

    class QLineEdit extends QWidget
    {
        public const int Normal = 0;
        public const int NoEcho = 1;
        public const int Password = 2;
        public const int PasswordEchoOnEdit = 3;

        public function __construct(?string $text = null, ?QWidget $parent = null) {}
        public function backspace(): void {}
        public function cursorPosition(): int {}
        public function del(): void {}
        public function deselect(): void {}
        public function displayText(): string {}
        public function echoMode(): int {}
        public function end(bool $mark = false): void {}
        public function hasSelectedText(): bool {}
        public function home(bool $mark = false): void {}
        public function insert(string $newText): void {}
        public function isClearButtonEnabled(): bool {}
        public function isModified(): bool {}
        public function isReadOnly(): bool {}
        public function maxLength(): int {}
        public function placeholderText(): string {}
        public function selectedText(): string {}
        public function setClearButtonEnabled(bool $enable): void {}
        public function setCursorPosition(int $position): void {}
        public function setEchoMode(int $mode): void {}
        public function setMaxLength(int $length): void {}
        public function setPlaceholderText(string $placeholderText): void {}
        public function setReadOnly(bool $readOnly): void {}
        public function setSelection(int $start, int $length): void {}
        public function setText(string $text): void {}
        public function text(): string {}

        // Signals
        public function onEditingFinished(callable $callback): void {}
        public function onReturnPressed(callable $callback): void {}
        public function onTextChanged(callable $callback): void {}

        // Slots
        public function clear(): void {}
        public function copy(): void {}
        public function cut(): void {}
        public function paste(): void {}
        public function redo(): void {}
        public function selectAll(): void {}
        public function undo(): void {}
    }

    class QMainWindow extends QWidget
    {
        public function __construct(?QWidget $parent = null, int $windowFlags = 0) {}
        public function setCentralWidget(QWidget $widget): void {}
    }

    class QPushButton extends QAbstractButton
    {
        public function __construct(?string $text = null, ?QWidget $parent = null) {}
    }
}
