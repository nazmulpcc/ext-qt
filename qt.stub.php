<?php

/**
 * @generate-class-entries
 * @undocumentable
 */

namespace Qt {
    class CheckState
    {
        public const int Unchecked = 0;
        public const int PartiallyChecked = 1;
        public const int Checked = 2;
    }
    class WindowType
    {
        public const int Widget = 0;
        public const int Window = 1;
        public const int Dialog = 2 | WindowType::Window;
        public const int Sheet = 4 | WindowType::Window;
        public const int Drawer = WindowType::Sheet | WindowType::Dialog;
        public const int Popup = 8 | WindowType::Window;
        public const int Tool = WindowType::Popup | WindowType::Dialog;
        public const int ToolTip = WindowType::Popup | WindowType::Sheet;
        public const int SplashScreen = WindowType::ToolTip | WindowType::Dialog;
        public const int SubWindow = 128;
        public const int ForeignWindow = 20 | WindowType::Window;
        public const int CoverWindow = 40 | WindowType::Window;
    }
    class AlignmentFlag
    {
        public const int AlignLeft = 0x0001;
        public const int AlignRight = 0x0002;
        public const int AlignHCenter = 0x0004;
        public const int AlignJustify = 0x0008;
        public const int AlignTop = 0x0020;
        public const int AlignBottom = 0x0040;
        public const int AlignVCenter = 0x0080;
        public const int AlignBaseline = 0x0100;
        public const int AlignCenter = AlignmentFlag::AlignVCenter | AlignmentFlag::AlignHCenter;
        public const int AlignAbsolute = 0x0010;
        public const int AlignLeading = AlignmentFlag::AlignLeft;
        public const int AlignTrailing = AlignmentFlag::AlignRight;
        // masks
        public const int AlignHorizontal_Mask = AlignmentFlag::AlignLeft | AlignmentFlag::AlignRight | AlignmentFlag::AlignHCenter | AlignmentFlag::AlignJustify | AlignmentFlag::AlignAbsolute;
        public const int AlignVertical_Mask = AlignmentFlag::AlignTop | AlignmentFlag::AlignBottom | AlignmentFlag::AlignVCenter | AlignmentFlag::AlignBaseline;
    }
}

namespace Qt\Core {
    class QCalendar
    {
        public const int Gregorian = 0;
        public const int Julian = 8;
        public const int Milankovic = 9;
        public const int Jalali = 10;
        public const int IslamicCivil = 11;

        public function __construct(int $system) {}
        public function isValid(): bool {}
    }

    class QDate
    {
        public function __construct(int $y, int $m, int $d) {}
        public function day(?QCalendar $calendar = null): int {}
        public function isNull(): bool {}
        public function isValid(): bool {}
        public function month(?QCalendar $calendar = null): int {}
        public function year(?QCalendar $calendar = null): int {}
    }

    class QDateTime
    {
        public function __construct(QDate $date, QTime $time, QTimeZone $timeZone) {}
    }

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

    class QTime
    {
        public function __construct(int $h, int $m, int $s = 0, int $ms = 0) {}
        public function hour(): int {}
        public function isNull(): bool {}
        public function isValid(): bool {}
        public function minute(): int {}
        public function msec(): int {}
        public function second(): int {}
    }

    class QTimeZone
    {
        public function __construct(int $offsetSeconds) {}
        public function isValid(): bool {}
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

    abstract class QAbstractSpinBox extends QWidget
    {
        public const int UpDownArrows = 0;
        public const int PlusMinus = 1;
        public const int NoButtons = 2;

        public function alignment(): int {}
        public function buttonSymbols(): int {}
        public function correctionMode(): int {}
        public function hasAcceptableInput(): bool {}
        public function hasFrame(): bool {}
        public function interpretText(): void {}
        public function isAccelerated(): bool {}
        public function isGroupSeparatorShown(): bool {}
        public function isReadOnly(): bool {}
        public function keyboardTracking(): bool {}
        public function setAccelerated(bool $on): void {}
        public function setAlignment(int $alignment): void {}
        public function setButtonSymbols(int $buttonSymbols): void {}
        public function setCorrectionMode(int $mode): void {}
        public function setFrame(bool $frame): void {}
        public function setGroupSeparatorShown(bool $show): void {}
        public function setKeyboardTracking(bool $on): void {}
        public function setReadOnly(bool $readOnly): void {}
        public function setSpecialValueText(string $text): void {}
        public function setWrapping(bool $enable): void {}
        public function specialValueText(): string {}
        public function stepBy(int $steps): void {}
        public function text(): string {}
        public function wrapping(): bool {}

        // Signals
        public function onEditingFinished(callable $callback): void {}

        // Slots
        public function clear(): void {}
        public function selectAll(): void {}
        public function stepDown(): void {}
        public function stepUp(): void {}
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

    class QDateTimeEdit extends QAbstractSpinbox
    {
        public function __construct(\Qt\Core\QDate|\Qt\Core\QTime|\Qt\Core\QDateTime|null $dateTime = null, ?QWidget $parent = null) {}
        public function calendar(): \Qt\Core\QCalendar {}
        public function calendarPopup(): bool {}
        public function clear(): void {}
        public function clearMaximumDate(): void {}
        public function clearMaximumDateTime(): void {}
        public function clearMaximumTime(): void {}
        public function clearMinimumDate(): void {}
        public function clearMinimumDateTime(): void {}
        public function clearMinimumTime(): void {}
        public function currentSection(): int {}
        public function currentSectionIndex(): int {}
        public function date(): \Qt\Core\QDate {}
        public function dateTime(): \Qt\Core\QDateTime {}
        public function displayFormat(): string {}
        public function maximumDate(): \Qt\Core\QDate {}
        public function maximumDateTime(): \Qt\Core\QDateTime {}
        public function maximumTime(): \Qt\Core\QTime {}
        public function minimumDate(): \Qt\Core\QDate {}
        public function minimumDateTime(): \Qt\Core\QDateTime {}
        public function minimumTime(): \Qt\Core\QTime {}
        public function sectionAt(int $index): int {}
        public function sectionCount(): int {}
        public function sectionText(int $section): string {}
        public function setCalendar(\Qt\Core\QCalendar $calendar): void {}
        public function setCalendarPopup(bool $enable): void {}
        public function setCurrentSection(int $section): void {}
        public function setCurrentSectionIndex(int $index): void {}
        public function setDateRange(\Qt\Core\QDate $min, \Qt\Core\QDate $max): void {}
        public function setDateTimeRange(\Qt\Core\QDateTime $min, \Qt\Core\QDateTime $max): void {}
        public function setDisplayFormat(string $format): void {}
        public function setMaximumDate(\Qt\Core\QDate $max): void {}
        public function setMaximumDateTime(\Qt\Core\QDateTime $dt): void {}
        public function setMaximumTime(\Qt\Core\QTime $max): void {}
        public function setMinimumDate(\Qt\Core\QDate $min): void {}
        public function setMinimumDateTime(\Qt\Core\QDateTime $dt): void {}
        public function setMinimumTime(\Qt\Core\QTime $min): void {}
        public function setSelectedSection(int $section): void {}
        public function setTimeRange(\Qt\Core\QTime $min, \Qt\Core\QTime $max): void {}
        public function setTimeZone(\Qt\Core\QTimeZone $timeZone): void {}
        public function time(): \Qt\Core\QTime {}
        public function timeZone(): \Qt\Core\QTimeZone {}

        // Slots
        public function setDate(\Qt\Core\QDate $date): void {}
        public function setDateTime(\Qt\Core\QDateTime $dateTime): void {}
        public function setTime(\Qt\Core\QTime $time): void {}

        // Signals
        public function onDateChanged(callable $callback): void {}
        public function onDateTimeChanged(callable $callback): void {}
        public function onTimeChanged(callable $callback): void {}
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
        public function acceptDrops(): bool {}
        public function accessibleDescription(): string {}
        public function accessibleName(): string {}
        public function actions(): array {}
        public function activateWindow(): void {}
        public function addAction(QAction $action): void {}
        public function addActions(array $actions): void {}
        public function adjustSize(): void {}
        public function autoFillBackground(): bool {}
        public function backgroundRole(): int {}
        public function baseSize(): QSize {}
        public function childAt(int $x, int $y): QWidget {}
        public function childrenRect(): QRect {}
        public function childrenRegion(): QRegion {}
        public function clearFocus(): void {}
        public function clearMask(): void {}
        public function contentsMargins(): QMargins {}
        public function contentsRect(): QRect {}
        public function contextMenuPolicy(): int {}
        public function ensurePolished(): void {}
        public function focusPolicy(): int {}
        public function frameGeometry(): QRect {}
        public function frameSize(): QSize {}
        public function geometry(): QRect {}
        public function grabKeyboard(): void {}
        public function grabMouse(): void {}
        public function hasEditFocus(): bool {}
        public function hasFocus(): bool {}
        public function hasMouseTracking(): bool {}
        public function hasTabletTracking(): bool {}
        public function height(): int {}
        public function inputMethodHints(): int {}
        public function insertAction(QAction $before, QAction $action): void {}
        public function insertActions(QAction $before, array $actions): void {}
        public function isActiveWindow(): bool {}
        public function isAncestorOf(QWidget $child): bool {}
        public function isEnabled(): bool {}
        public function isEnabledTo(QWidget $ancestor): bool {}
        public function isFullScreen(): bool {}
        public function isHidden(): bool {}
        public function isMaximized(): bool {}
        public function isMinimized(): bool {}
        public function isModal(): bool {}
        public function isVisible(): bool {}
        public function isVisibleTo(QWidget $ancestor): bool {}
        public function isWindow(): bool {}
        public function isWindowModified(): bool {}
        public function layout(): QLayout {}
        public function layoutDirection(): int {}
        public function maximumHeight(): int {}
        public function maximumSize(): QSize {}
        public function maximumWidth(): int {}
        public function minimumHeight(): int {}
        public function minimumSize(): QSize {}
        public function minimumWidth(): int {}
        public function move(int $x, int $y): void {}
        public function nativeParentWidget(): QWidget {}
        public function nextInFocusChain(): QWidget {}
        public function normalGeometry(): QRect {}
        public function overrideWindowFlags(int $flags): void {}
        public function parentWidget(): QWidget {}
        public function pos(): QPoint {}
        public function previousInFocusChain(): QWidget {}
        public function rect(): QRect {}
        public function releaseKeyboard(): void {}
        public function releaseMouse(): void {}
        public function releaseShortcut(int $id): void {}
        public function removeAction(QAction $action): void {}
        public function repaint(Qrect $rect): void {}
        public function resize(int $w, int $h): void {}
        public function scroll(int $dx, int $dy): void {}
        public function setAcceptDrops(bool $on): void {}
        public function setAccessibleDescription(string $description): void {}
        public function setAccessibleName(string $name): void {}
        public function setAttribute(int $attribute, bool $on = true): void {}
        public function setAutoFillBackground(bool $enabled): void {}
        public function setBackgroundRole(int $role): void {}
        public function setBaseSize(int $basew, int $baseh): void {}
        public function setContentsMargins(int $left, int $top, int $right, int $bottom): void {}
        public function setContextMenuPolicy(int $policy): void {}
        public function setEditFocus(bool enable): void {}
        public function setFixedHeight(int $h): void {}
        public function setFixedSize(int $w, int $h): void {}
        public function setFixedWidth(int $w): void {}
        public function setFocus(int $reason): void {}
        public function setFocusPolicy(int $policy): void {}
        public function setFont(QFont $font): void {}
        public function setGeometry(int $x, int $y, int $w, int $h): void {}
        public function setInputMethodHints(int $hints): void {}
        public function setLayout(QLayout $layout): void {}
        public function setWindowModified(bool $modified): void {}
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

    class QRadioButton extends QAbstractButton
    {
        public function __construct(?string $text = null, ?QWidget $parent = null) {}
    }

    class QSpinBox extends QAbstractSpinBox
    {
        public function __construct(?QWidget $parent = null) {}
        public function cleanText(): string {}
        public function displayIntegerBase(): int {}
        public function maximum(): int {}
        public function minimum(): int {}
        public function prefix(): string {}
        public function setDisplayIntegerBase(int $base): void {}
        public function setMaximum(int $max): void {}
        public function setMinimum(int $min): void {}
        public function setPrefix(string $prefix): void {}
        public function setRange(int $min, int $max): void {}
        public function setSingleStep(int $val): void {}
        public function setStepType(int $stepType): void {}
        public function setSuffix(string $suffix): void {}
        public function singleStep(): int {}
        public function stepType(): int {}
        public function suffix(): string {}
        public function value(): int {}

        // Slots
        public function setValue(int $val): void {}

        // Signals
        public function onTextChanged(callable $callback): void {}
        public function onValueChanged(callable $callback): void {}
    }
}
