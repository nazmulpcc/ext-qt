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
    class Orientation
    {
        public const int Horizontal = 1;
        public const int Vertical = 2;
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

    class TextFormat
    {
        public const int PlainText = 0;
        public const int RichText = 1;
        public const int AutoText = 2;
        public const int MarkdownText = 3;
    }

    class TextInteractionFlag
    {
        public const int NoTextInteraction = 0;
        public const int TextSelectableByMouse = 1;
        public const int TextSelectableByKeyboard = 2;
        public const int LinksAccessibleByMouse = 4;
        public const int LinksAccessibleByKeyboard = 8;
        public const int TextEditable = 16;
        public const int TextEditorInteraction = TextInteractionFlag::TextSelectableByMouse | TextInteractionFlag::TextSelectableByKeyboard | TextInteractionFlag::TextEditable;
        public const int TextBrowserInteraction = TextInteractionFlag::TextSelectableByMouse | TextInteractionFlag::LinksAccessibleByMouse | TextInteractionFlag::LinksAccessibleByKeyboard;
    }
}

namespace Qt\Core {
    abstract class QAbstractItemModel extends QObject
    {
        public const int NoOption = 0;
        public const int IndexIsValid = 1;
        public const int DoNotUseParent = 2;
        public const int ParentIsInvalid = 4;

        public function __construct(?QObject $parent = null) {}
        public function buddy(QModelIndex $index): QModelIndex {}
        // public function canDropMimeData(QMimeData $data, int $action, int $row, int $column, QModelIndex $parent): bool {} // @todo: Implement QMimeData
        public function canFetchMore(QModelIndex $parent): bool {}
        public function checkIndex(QModelIndex $index, int $options = QAbstractItemModel::NoOption): bool {}
        public function clearItemData(QModelIndex $index): void {}
        abstract public function columnCount(?QModelIndex $parent = null): int;
        abstract public function data(QModelIndex $index, int $role = 0): mixed;
        // public function dropMimeData(QMimeData $data, int $action, int $row, int $column, QModelIndex $parent): bool {} // @todo: Implement QMimeData
        public function fetchMore(QModelIndex $parent): void {}
        public function flags(QModelIndex $index): int {}
        public function hasChildren(?QModelIndex $parent = null): bool {}
        public function hasIndex(int $row, int $column, ?QModelIndex $parent = null): bool {}
        public function headerData(int $section, int $orientation, int $role = 0): mixed {}
        abstract public function index(int $row, int $column, ?QModelIndex $parent = null): QModelIndex;
        public function insertColumn(int $column, ?QModelIndex $parent = null): bool {}
        public function insertColumns(int $column, int $count, ?QModelIndex $parent = null): bool {}
        public function insertRow(int $row, ?QModelIndex $parent = null): bool {}
        public function insertRows(int $row, int $count, ?QModelIndex $parent = null): bool {}
        // public function moveColumn(QModelIndex $sourceParent, int $sourceColumn, QModelIndex $destinationParent, int $destinationChild): bool {}
        // public function moveColumns(QModelIndex $sourceParent, int $sourceColumn, int $count, QModelIndex $destinationParent, int $destinationChild): bool {}
        // public function moveRow(QModelIndex $sourceParent, int $sourceRow, QModelIndex $destinationParent, int $destinationChild): bool {}
        // public function moveRows(QModelIndex $sourceParent, int $sourceRow, int $count, QModelIndex $destinationParent, int $destinationChild): bool {}
        abstract public function parent(QModelIndex $index): QModelIndex;
        public function removeColumn(int $column, ?QModelIndex $parent = null): bool {}
        public function removeColumns(int $column, int $count, ?QModelIndex $parent = null): bool {}
        public function removeRow(int $row, ?QModelIndex $parent = null): bool {}
        public function removeRows(int $row, int $count, ?QModelIndex $parent = null): bool {}
        public function rowCount(?QModelIndex $parent = null): int;
        public function setData(QModelIndex $index, mixed $value, int $role = 0): bool {}
        public function setHeaderData(int $section, int $orientation, mixed $value, int $role = 2): bool {}
        public function sibling(int $row, int $column, QModelIndex $index): QModelIndex {}
        public function sort(int $column, int $order = 0): void {}

        // slots
        public function revert(): void {}
        public function submit(): void {}

        // callable signals
        public function dataChanged(QModelIndex $topLeft, QModelIndex $bottomRight): void {}

        // signals
        public function onColumnsAboutToBeInserted(callable $callback): void {}
        public function onColumnsAboutToBeMoved(callable $callback): void {}
        public function onColumnsAboutToBeRemoved(callable $callback): void {}
        public function onColumnsInserted(callable $callback): void {}
        public function onColumnsMoved(callable $callback): void {}
        public function onColumnsRemoved(callable $callback): void {}
        public function onDataChanged(callable $callback): void {}
        public function onHeaderDataChanged(callable $callback): void {}
        public function onLayoutAboutToBeChanged(callable $callback): void {}
        public function onLayoutChanged(callable $callback): void {}
        public function onModelAboutToBeReset(callable $callback): void {}
        public function onModelReset(callable $callback): void {}
        public function onRowsAboutToBeInserted(callable $callback): void {}
        public function onRowsAboutToBeMoved(callable $callback): void {}
        public function onRowsAboutToBeRemoved(callable $callback): void {}
        public function onRowsInserted(callable $callback): void {}
        public function onRowsMoved(callable $callback): void {}
        public function onRowsRemoved(callable $callback): void {}

        // protected functions
        protected function beginInsertColumns(QModelIndex $parent, int $first, int $last): void {}
        protected function beginInsertRows(QModelIndex $parent, int $first, int $last): void {}
        protected function beginMoveColumns(QModelIndex $sourceParent, int $sourceFirst, int $sourceLast, QModelIndex $destinationParent, int $destinationChild): void {}
        protected function beginMoveRows(QModelIndex $sourceParent, int $sourceFirst, int $sourceLast, QModelIndex $destinationParent, int $destinationChild): void {}
        protected function beginRemoveColumns(QModelIndex $parent, int $first, int $last): void {}
        protected function beginRemoveRows(QModelIndex $parent, int $first, int $last): void {}
        protected function beginResetModel(): void {}
        protected function changePersistentIndex(QModelIndex $from, QModelIndex $to): void {}
        protected function createIndex(int $row, int $column): QModelIndex {}
        protected function endInsertColumns(): void {}
        protected function endInsertRows(): void {}
        protected function endMoveColumns(): void {}
        protected function endMoveRows(): void {}
        protected function endRemoveColumns(): void {}
        protected function endRemoveRows(): void {}
        protected function endResetModel(): void {}
        // protected function persistentIndexList(): array {}
    }

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

    class QModelIndex
    {
        public function __construct() {}
        public function column(): int {}
        public function data(int $role = 0): mixed {}
        public function isValid(): bool {}
        public function model(): QAbstractItemModel {}
        public function parent(): QModelIndex {}
        public function row(): int {}
        public function sibling(int $row, int $column): QModelIndex {}
        public function siblingAtColumn(int $column): QModelIndex {}
        public function siblingAtRow(int $row): QModelIndex {}
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
        public function startTimer(int $interval, int $timerType = 1): int {}
        protected function timerEvent(int $timerId): void {}
    }

    class QRect
    {
        public function __construct(int $x, int $y, int $width, int $height) {}
    }

    class QSize
    {
        public function __construct(int $width, int $height) {}
        public function height(): int {}
        public function isEmpty(): int {}
        public function isNull(): int {}
        public function isValid(): int {}
        public function width(): int {}
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

    abstract class QAbstractItemView extends QAbstractScrollArea
    {
        //
    }

    abstract class QAbstractScrollArea extends QWidget
    {
        public function addScrollBarWidget(QWidget $widget, int $alignment): void {}
        public function horizontalScrollBarPolicy(): int {}
        public function maximumViewportSize(): \Qt\Core\QSize {}
        public function setCornerWidget(QWidget $widget): void {}
        public function setHorizontalScrollBar(QScrollBar $scrollBar): void {}
        public function setHorizontalScrollBarPolicy(int $policy): void {}
        public function setSizeAdjustPolicy(int $policy): void {}
        public function setVerticalScrollBar(QScrollBar $scrollBar): void {}
        public function setVerticalScrollBarPolicy(int $policy): void {}
        public function setViewport(QWidget $widget): void {}
        public function sizeAdjustPolicy(): int {}
        public function verticalScrollBarPolicy(): int {}
    }

    abstract class QAbstractSlider extends QWidget
    {
        public const int SliderNoAction = 0;
        public const int SliderSingleStepAdd = 1;
        public const int SliderSingleStepSub = 2;
        public const int SliderPageStepAdd = 3;
        public const int SliderPageStepSub = 4;
        public const int SliderToMinimum = 5;
        public const int SliderToMaximum = 6;
        public const int SliderMove = 7;

        public const int SliderRangeChange = 0;
        public const int SliderOrientationChange = 1;
        public const int SliderStepsChange = 2;
        public const int SliderValueChange = 3;

        public function hasTracking(): bool {}
        public function invertedAppearance(): bool {}
        public function invertedControls(): bool {}
        public function isSliderDown(): bool {}
        public function maximum(): int {}
        public function minimum(): int {}
        public function orientation(): int {}
        public function pageStep(): int {}
        public function setInvertedAppearance(bool $inverted): void {}
        public function setInvertedControls(bool $inverted): void {}
        public function setMaximum(int $max): void {}
        public function setMinimum(int $min): void {}
        public function setPageStep(int $step): void {}
        public function setSingleStep(int $step): void {}
        public function setSliderDown(bool $down): void {}
        public function setSliderPosition(int $position): void {}
        public function setTracking(bool $enable): void {}
        public function singleStep(): int {}
        public function sliderPosition(): int {}
        public function triggerAction(int $action): void {}
        public function value(): int {}

        // Signals
        public function setOrientation(int $orientation): void {}
        public function setRange(int $min, int $max): void {}
        public function setValue(int $value): void {}

        // Slots
        public function onActionTriggered(callable $callback): void {}
        public function onRangeChanged(callable $callback): void {}
        public function onSliderMoved(callable $callback): void {}
        public function onSliderPressed(callable $callback): void {}
        public function onSliderReleased(callable $callback): void {}
        public function onValueChanged(callable $callback): void {}
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

    class QComboBox extends QWidget
    {
        public const int NoInsert = 0;
        public const int InsertAtTop = 1;
        public const int InsertAtCurrent = 2;
        public const int InsertAtBottom = 3;
        public const int InsertAfterCurrent = 4;
        public const int InsertBeforeCurrent = 5;
        public const int InsertAlphabetically = 6;

        public const int AdjustToContents = 0;
        public const int AdjustToContentsOnFirstShow = 1;
        public const int AdjustToMinimumContentsLengthWithIcon = 2;

        public function __construct(?QWidget $parent = null) {}
        public function addItem(string $text): void {}
        public function addItems(array $texts): void {}
        public function count(): int {}
        public function currentIndex(): int {}
        public function currentText(): string {}
        public function duplicatesEnabled(): bool {}
        public function hasFrame(): bool {}
        public function hidePopup(): void {}
        public function insertItem(int $index, string $text): void {}
        public function insertPolicy(): int {}
        public function insertSeparator(int $index): void {}
        public function isEditable(): bool {}
        public function itemText(int $index): string {}
        // public function lineEdit(): QLineEdit {}
        public function maxCount(): int {}
        public function maxVisibleItems(): int {}
        public function minimumContentsLength(): int {}
        public function placeholderText(): string {}
        public function removeItem(int $index): void {}
        public function setDuplicatesEnabled(bool $enable): void {}
        public function setEditable(bool $editable): void {}
        public function setFrame(bool $frame): void {}
        public function setInsertPolicy(int $policy): void {}
        public function setItemText(int $index, string $text): void {}
        public function setMaxCount(int $max): void {}
        public function setMaxVisibleItems(int $maxItems): void {}
        public function setMinimumContentsLength(int $characters): void {}
        public function setPlaceholderText(string $placeholderText): void {}
        public function setSizeAdjustPolicy(int $policy): void {}
        public function showPopup(): void {}
        public function sizeAdjustPolicy(): int {}

        // slots
        public function clear(): void {}
        public function clearEditText(): void {}
        public function setCurrentIndex(int $index): void {}
        public function setCurrentText(string $text): void {}
        public function setEditText(string $text): void {}

        // signals
        public function onActivated(callable $callback): void {}
        public function onCurrentIndexChanged(callable $callback): void {}
        public function onCurrentTextChanged(callable $callback): void {}
        public function onEditTextChanged(callable $callback): void {}
        public function onHighlighted(callable $callback): void {}
        public function onTextActivated(callable $callback): void {}
        public function onTextHighlighted(callable $callback): void {}
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

    class QDial extends QAbstractSlider
    {
        public function __construct(?QWidget $parent = null) {}
        public function notchSize(): int {}
        public function notchTarget(): float {}
        public function notchesVisible(): bool {}
        public function setNotchTarget(float $target): void {}
        public function wrapping(): bool {}

        // Slots
        public function setNotchesVisible(bool $visible): void {}
        public function setWrapping(bool $on): void {}
    }

    class QFrame extends QWidget
    {
        public const int NoFrame = 0;
        public const int Box = 1;
        public const int Panel = 2;
        public const int StyledPanel = 6;
        public const int HLine = 4;
        public const int VLine = 5;
        public const int WinPanel = 3;

        public const int Plain = 16; // 0x10
        public const int Raised = 32; // 0x20
        public const int Sunken = 48; // 0x30

        public function __construct(?QWidget $parent = null, int $flags = 0) {}
        public function frameRect(): \Qt\Core\QRect {}
        public function frameShadow(): int {}
        public function frameShape(): int {}
        public function frameStyle(): int {}
        public function frameWidth(): int {}
        public function lineWidth(): int {}
        public function midLineWidth(): int {}
        public function setFrameRect(\Qt\Core\QRect $rect): void {}
        public function setFrameShadow(int $shadow): void {}
        public function setFrameShape(int $shape): void {}
        public function setFrameStyle(int $style): void {}
        public function setLineWidth(int $width): void {}
        public function setMidLineWidth(int $width): void {}
    }

    class QGroupBox extends QWidget
    {
        public function __construct(?string $title = null, ?QWidget $parent = null) {}
        public function alignment(): int {}
        public function isCheckable(): bool {}
        public function isChecked(): bool {}
        public function isFlat(): bool {}
        public function setAlignment(int $alignment): void {}
        public function setCheckable(bool $checkable): void {}
        public function setFlat(bool $flat): void {}
        public function setTitle(string $title): void {}
        public function title(): string {}

        // slots
        public function setChecked(bool $checked): void {}

        // signals
        public function onClicked(callable $callback): void {}
        public function onToggled(callable $callback): void {}
    }

    class QHBoxLayout extends QBoxLayout
    {
        public function __construct(?QWidget $parent = null) {}
    }

    class QSlider extends QAbstractSlider
    {
        public const int NoTicks = 0;
        public const int TicksAbove = 1;
        public const int TicksBelow = 2;
        public const int TicksBothSides = 3;
        public const int TicksLeft = 1;
        public const int TicksRight = 2;

        public function __construct(int $orientation = \Qt\Orientation::Vertical, ?QWidget $parent = null) {}
        public function setTickInterval(int $ti): void {}
        public function setTickPosition(int $position): void {}
        public function tickInterval(): int {}
        public function tickPosition(): int {}
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
        // public function actions(): array {}
        public function activateWindow(): void {}
        // public function addAction(QAction $action): void {}
        // public function addActions(array $actions): void {}
        public function adjustSize(): void {}
        public function autoFillBackground(): bool {}
        public function backgroundRole(): int {}
        public function baseSize(): Qt\Core\QSize {}
        public function childAt(int $x, int $y): QWidget {}
        public function childrenRect(): \Qt\Core\QRect {}
        // public function childrenRegion(): \Qt\Gui\QRegion {}
        public function clearFocus(): void {}
        public function clearMask(): void {}
        public function contentsMargins(): array {}
        public function contentsRect(): \Qt\Core\QRect {}
        public function contextMenuPolicy(): int {}
        public function ensurePolished(): void {}
        public function focusPolicy(): int {}
        public function frameGeometry(): \Qt\Core\QRect {}
        public function frameSize(): Qt\Core\QSize {}
        public function geometry(): \Qt\Core\QRect {}
        public function grabKeyboard(): void {}
        public function grabMouse(): void {}
        // public function hasEditFocus(): bool {}
        public function hasFocus(): bool {}
        public function hasMouseTracking(): bool {}
        public function hasTabletTracking(): bool {}
        public function height(): int {}
        public function inputMethodHints(): int {}
        // public function insertAction(QAction $before, QAction $action): void {}
        // public function insertActions(QAction $before, array $actions): void {}
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
        public function layout(): ?QLayout {}
        public function layoutDirection(): int {}
        public function maximumHeight(): int {}
        public function maximumSize(): Qt\Core\QSize {}
        public function maximumWidth(): int {}
        public function minimumHeight(): int {}
        public function minimumSize(): Qt\Core\QSize {}
        public function minimumWidth(): int {}
        public function move(int $x, int $y): void {}
        public function nativeParentWidget(): QWidget {}
        public function nextInFocusChain(): QWidget {}
        public function normalGeometry(): \Qt\Core\QRect {}
        public function overrideWindowFlags(int $flags): void {}
        public function parentWidget(): QWidget {}
        public function pos(): array {}
        public function previousInFocusChain(): QWidget {}
        public function rect(): \Qt\Core\QRect {}
        public function releaseKeyboard(): void {}
        public function releaseMouse(): void {}
        public function releaseShortcut(int $id): void {}
        // public function removeAction(QAction $action): void {}
        public function repaint(?\Qt\Core\Qrect $rect = null): void {}
        public function resize(int $w, int $h): void {}
        public function scroll(int $dx, int $dy): void {}
        public function setAcceptDrops(bool $on): void {}
        public function setAccessibleDescription(string $description): void {}
        public function setAccessibleName(string $name): void {}
        // public function setAttribute(int $attribute, bool $on = true): void {}
        public function setAutoFillBackground(bool $enabled): void {}
        public function setBackgroundRole(int $role): void {}
        public function setBaseSize(int $basew, int $baseh): void {}
        public function setContentsMargins(int $left, int $top, int $right, int $bottom): void {}
        public function setContextMenuPolicy(int $policy): void {}
        // public function setEditFocus(bool $enable): void {}
        public function setFixedHeight(int $h): void {}
        public function setFixedSize(int $w, int $h): void {}
        public function setFixedWidth(int $w): void {}
        public function setFocus(?int $reason = null): void {}
        public function setFocusPolicy(int $policy): void {}
        // public function setFont(QFont $font): void {}
        public function setGeometry(int $x, int $y, int $w, int $h): void {}
        public function setInputMethodHints(int $hints): void {}
        public function setLayout(QLayout $layout): void {}
        public function setLayoutDirection(int $direction): void {}
        public function setMaximumHeight(int $maxh): void {}
        public function setMaximumSize(int $maxw, int $maxh): void {}
        public function setMaximumWidth(int $maxw): void {}
        public function setMinimumHeight(int $minh): void {}
        public function setMinimumSize(int $minw, int $minh): void {}
        public function setMinimumWidth(int $minw): void {}
        public function setMouseTracking(bool $enable): void {}
        // public function setParent(QWidget $parent): void {}
        public function setShortcutAutoRepeat(int $id, bool $enable = true): void {}
        public function setShortcutEnabled(int $id, bool $enable = true): void {}
        public function setSizeIncrement(int $w, int $h): void {}
        public function setSizePolicy(int $horizontal, ?int $vertical = null): void {}
        public function setStatusTip(string $statusTip): void {}
        // public function setStyle(QStyle $style): void {}
        public function setTabletTracking(bool $enable): void {}
        public function setToolTip(string $toolTip): void {}
        public function setToolTipDuration(int $msec): void {}
        public function setUpdatesEnabled(bool $enable): void {}
        public function setWhatsThis(string $whatsThis): void {}
        public function setWindowFilePath(string $filePath): void {}
        public function setWindowFlag(int $flag, bool $on = true): void {}
        public function setWindowFlags(int $flags): void {}
        public function setWindowModality(int $windowModality): void {}
        public function setWindowOpacity(float $level): void {}
        public function setWindowRole(string $role): void {}
        public function setWindowState(int $state): void {}
        public function size(): \Qt\Core\QSize {}
        public function sizeIncrement(): \Qt\Core\QSize {}
        //public function sizePolicy(): QSizePolicy {}
        // public function stackUnder(QWidget $w): void {}
        public function statusTip(): string {}
        // public function style(): QStyle {}
        public function styleSheet(): string {}
        public function toolTip(): string {}
        public function toolTipDuration(): int {}
        public function underMouse(): bool {}
        public function ungrabGesture(int $gestureType): void {}
        public function unsetCursor(): void {}
        public function unsetLayoutDirection(): void {}
        public function updatesEnabled(): bool {}
        public function updateGeometry(): void {}
        // public function visibleRegion(): \Qt\Core\QRegion {}
        public function whatsThis(): string {}
        public function width(): int {}
        public function window(): QWidget {}
        public function windowFilePath(): string {}
        public function windowFlags(): int {}
        //public function windowHandle(): QWindow {}
        public function windowModality(): int {}
        public function windowOpacity(): float {}
        public function windowRole(): string {}
        public function windowState(): int {}
        public function windowTitle(): string {}
        public function windowType(): int {}
        public function x(): int {}
        public function y(): int {}

        // Slots
        public function close(): void {}
        public function hide(): void {}
        public function lower(): void {}
        public function raise(): void {}
        public function setDisabled(bool $disable): void {}
        public function setEnabled(bool $enable): void {}
        public function setHidden(bool $hide): void {}
        public function setStyleSheet(string $styleSheet): void {}
        public function setWindowModified(bool $modified): void {}
        public function setWindowTitle(string $title): void {}
        public function show(): void {}
        public function showFullScreen(): void {}
        public function showMaximized(): void {}
        public function showMinimized(): void {}
        public function showNormal(): void {}
        public function update(?\Qt\Core\QRect $region = null): void {}

        // Signals
        public function onCustomContextMenuRequested(callable $callback): void {}
        // public function onWindowIconChanged(callable $callback): void {}
        public function onWindowTitleChanged(callable $callback): void {}

        // protected
        protected function focusNextChild(): bool {}
    }

    class QLabel extends QFrame
    {
        public function __construct(?string $text = null, ?QWidget $parent = null, int $windowFlags = 0) {}
        public function setOpenExternalLinks(bool $open): void {}
        public function setText(string $text): void {}
        public function setTextInteractionFlags(int $flags): void {}
        public function setTextFormat(int $format): void {}
        public function setWordWrap(bool $on): void {}
        public function text(): string {}
        public function wordWrap(): bool {}
    }

    abstract class QLayout extends \Qt\Core\QObject
    {
        public function addWidget(QWidget $widget): void {}
        public function removeWidget(QWidget $widget): void {}
        public function setSpacing(int $spacing): void {}
        public function spacing(): int {}
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

    class QScrollArea extends QFrame // @todo Implement QAbstractScrollArea
    {
        public function __construct(?QWidget $parent = null) {}
        public function alignment(): int {}
        public function ensureVisible(int $x, int $y, int $xmargin = 50, int $ymargin = 50): void {}
        public function ensureWidgetVisible(QWidget $childWidget, int $xmargin = 50, int $ymargin = 50): void {}
        public function setAlignment(int $alignment): void {}
        public function setWidget(QWidget $widget): void {}
        public function setWidgetResizable(bool $resizable): void {}
    }

    class QScrollBar extends QAbstractSlider
    {
        public function __construct(int $orientation = \Qt\Orientation::Vertical, ?QWidget $parent = null) {}
    }

    class QSizePolicy
    {
        public const int GrowFlag = 1;
        public const int ExpandFlag = 2;
        public const int ShrinkFlag = 4;
        public const int IgnoreFlag = 8;

        public const int Fixed = 0;
        public const int Minimum = QSizePolicy::GrowFlag;
        public const int Maximum = QSizePolicy::ShrinkFlag;
        public const int Preferred = QSizePolicy::GrowFlag | QSizePolicy::ShrinkFlag;
        public const int Expanding = QSizePolicy::GrowFlag | QSizePolicy::ShrinkFlag | QSizePolicy::ExpandFlag;
        public const int MinimumExpanding = QSizePolicy::GrowFlag | QSizePolicy::ExpandFlag;
        public const int Ignored = QSizePolicy::ShrinkFlag | QSizePolicy::GrowFlag | QSizePolicy::IgnoreFlag;
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

    class QSplitter extends QFrame
    {
        public function __construct(int $orientation = \Qt\Orientation::Horizontal, ?QWidget $parent = null) {}
        public function addWidget(QWidget $widget): void {}
        public function childrenCollapsible(): bool {}
        public function count(): int {}
        public function handleWidth(): int {}
        public function indexOf(QWidget $widget): int {}
        public function insertWidget(int $index, QWidget $widget): void {}
        public function isCollapsible(int $index): bool {}
        public function opaqueResize(): bool {}
        public function refresh(): void {}
        public function replaceWidget(int $index, QWidget $widget): void {}
        public function setChildrenCollapsible(bool $enable): void {}
        public function setCollapsible(int $index, bool $collapsible): void {}
        public function setHandleWidth(int $width): void {}
        public function setOpaqueResize(bool $opaque = true): void {}
        public function setOrientation(int $orientation): void {}
        public function setSizes(array $sizes): void {}
        public function setStretchFactor(int $index, int $stretch): void {}
        public function sizes(): array {}
        // public function widget(int $index): QWidget {}

        // Signals
        public function onSplitterMoved(callable $callback): void {}
    }

    class QStackedWidget extends QFrame
    {
        public function __construct(?QWidget $parent = null) {}
        public function addWidget(QWidget $widget): void {}
        public function count(): int {}
        public function currentIndex(): int {}
        public function currentWidget(): QWidget {}
        public function indexOf(QWidget $widget): int {}
        public function insertWidget(int $index, QWidget $widget): void {}
        public function removeWidget(QWidget $widget): void {}
        public function setCurrentIndex(int $index): void {}
        public function setCurrentWidget(QWidget $widget): void {}
        public function widget(int $index): ?QWidget {}

        // Signals
        public function onCurrentChanged(callable $callback): void {}
        public function onWidgetRemoved(callable $callback): void {}
    }

    class QTableView extends QAbstractItemView
    {
        public function __construct(?QWidget $parent = null) {}
        public function setModel(\Qt\Core\QAbstractItemModel $model): void {}
    }

    class QTextEdit extends QAbstractScrollArea
    {
        public function __construct(?string $text = null, ?QWidget $parent = null) {}
        public function acceptRichText(): bool {}
        public function alignment(): int {}
        public function anchorAt(int $x, int $y): string {}
        public function autoFormatting(): int {}
        public function canPaste(): bool {}
        public function documentTitle(): string {}
        public function ensureCursorVisible(): void {}
        public function fontFamily(): string {}
        public function fontItalic(): bool {}
        public function fontPointSize(): int {}
        public function fontUnderline(): bool {}
        public function fontWeight(): int {}
        public function isReadOnly(): bool {}
        public function isUndoRedoEnabled(): bool {}
        public function lineWrapColumnOrWidth(): int {}
        public function lineWrapMode(): int {}
        public function overwriteMode(): bool {}
        public function placeholderText(): string {}
        public function setAcceptRichText(bool $accept): void {}
        public function setAutoFormatting(int $features): void {}
        public function setDocumentTitle(string $title): void {}
        public function setLineWrapColumnOrWidth(int $w): void {}
        public function setLineWrapMode(int $mode): void {}
        public function setOverwriteMode(bool $overwrite): void {}
        public function setPlaceholderText(string $placeholderText): void {}
        public function setReadOnly(bool $readOnly): void {}
        public function setTabChangesFocus(bool $b): void {}
        public function setTabStopDistance(float $distance): void {}
        public function setTextInteractionFlags(int $flags): void {}
        public function setUndoRedoEnabled(bool $enable): void {}
        public function setWordWrapMode(int $policy): void {}
        public function tabChangesFocus(): bool {}
        public function tabStopDistance(): float {}
        public function textInteractionFlags(): int {}
        public function toHtml(): string {}
        public function toMarkdown(int $features = 2): string {}
        public function toPlainText(): string {}
        public function wordWrapMode(): int {}

        // Slots
        public function append(string $text): void {}
        public function clear(): void {}
        public function copy(): void {}
        public function cut(): void {}
        public function insertHtml(string $text): void {}
        public function insertPlainText(string $text): void {}
        public function paste(): void {}
        public function redo(): void {}
        public function scrollToAnchor(string $name): void {}
        public function selectAll(): void {}
        public function setAlignment(int $alignment): void {}
        public function setFontFamily(string $family): void {}
        public function setFontItalic(bool $italic): void {}
        public function setFontPointSize(float $size): void {}
        public function setFontUnderline(bool $underline): void {}
        public function setFontWeight(int $weight): void {}
        public function setHtml(string $text): void {}
        public function setMarkdown(string $text): void {}
        public function setPlainText(string $text): void {}
        public function setText(string $text): void {}
        public function undo(): void {}
        public function zoomIn(int $range = 1): void {}
        public function zoomOut(int $range = 1): void {}

        // Signals
        public function onCopyAvailable(callable $callback): void {}
        public function onCursorPositionChanged(callable $callback): void {}
        public function onRedoAvailable(callable $callback): void {}
        public function onSelectionChanged(callable $callback): void {}
        public function onTextChanged(callable $callback): void {}
        public function onUndoAvailable(callable $callback): void {}
    }
}
